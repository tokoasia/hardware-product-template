#!/usr/bin/env python3
"""
Tokoasia Hardware Playground
Project: Python / SBC Demo Script
License: MIT
"""

import time
import sys

def main():
    print("=" * 45)
    print("  Tokoasia Hardware Python Demo  ")
    print("  Make • Build • Play            ")
    print("=" * 45)
    
    try:
        count = 0
        while True:
            count += 1
            print(f"[{time.strftime('%H:%M:%S')}] Pembacaan #{count}: Status OK")
            time.sleep(1.0)
    except KeyboardInterrupt:
        print("\nDemo selesai dihentikan.")
        sys.exit(0)

if __name__ == "__main__":
    main()
