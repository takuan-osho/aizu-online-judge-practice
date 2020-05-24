def main():
    width, height = map(int, input().split())
    area = width * height
    track_length = (width + height) * 2

    print(f"{area} {track_length}", end="\n")


if __name__ == "__main__":
    main()
