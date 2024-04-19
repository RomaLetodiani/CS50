def main():
    """Main function to get file type from user input."""
    file_name = input("File name: ").strip().lower()
    file_extension = file_name.split('.')[-1]
    mime_type = get_file_type(file_extension)
    print(mime_type)


def get_file_type(file_extension: str):
    """Get the MIME type based on file extension."""
    file_types = {
        'gif': 'image/gif',
        'jpg': 'image/jpeg',
        'jpeg': 'image/jpeg',
        'png': 'image/png',
        'pdf': 'application/pdf',
        'txt': 'text/plain',
        'zip': 'application/zip',
    }
    return file_types.get(file_extension.lower(), 'application/octet-stream')


if __name__ == "__main__":
    main()
