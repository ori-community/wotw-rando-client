#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/FileAccess__Enum.h>
#include <Modloader/app/structs/FileAttributes__Enum.h>
#include <Modloader/app/structs/FileMode__Enum.h>
#include <Modloader/app/structs/FileOptions__Enum.h>
#include <Modloader/app/structs/FileShare__Enum.h>
#include <Modloader/app/structs/MonoFileType__Enum.h>
#include <Modloader/app/structs/MonoIOError__Enum.h>
#include <Modloader/app/structs/MonoIOStat.h>
#include <Modloader/app/structs/SafeHandle.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::System::IO::MonoIO {
    IL2CPP_REGISTER_METHOD(0x023721F0, app::Exception*, GetException_1, app::MonoIOError__Enum error)
    IL2CPP_REGISTER_METHOD(0x02372480, app::Exception*, GetException_2, app::String* path, app::MonoIOError__Enum error)
    IL2CPP_REGISTER_METHOD(0x02373560, bool, CreateDirectory_1, char16_t* path, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x023735E0, bool, CreateDirectory_2, app::String* path, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02373700, bool, RemoveDirectory_1, char16_t* path, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02373780, bool, RemoveDirectory_2, app::String* path, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x023738A0, app::String*, GetCurrentDirectory, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02373930, bool, MoveFile_1, char16_t* path, char16_t* dest, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02373A30, bool, MoveFile_2, app::String* path, app::String* dest, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02373BD0, bool, CopyFile_1, char16_t* path, char16_t* dest, bool overwrite, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02373CE0, bool, CopyFile_2, app::String* path, app::String* dest, bool overwrite, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02373E90, bool, DeleteFile_1, char16_t* path, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02373F10, bool, DeleteFile_2, app::String* path, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02374030, app::FileAttributes__Enum, GetFileAttributes_1, char16_t* path, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x023740B0, app::FileAttributes__Enum, GetFileAttributes_2, app::String* path, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x023741D0, bool, SetFileAttributes_1, char16_t* path, app::FileAttributes__Enum attrs, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02374260, bool, SetFileAttributes_2, app::String* path, app::FileAttributes__Enum attrs, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02374390, app::MonoFileType__Enum, GetFileType_1, void* handle, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x023743A0, app::MonoFileType__Enum, GetFileType_2, app::SafeHandle* safe_handle, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02374510, void*, FindFirstFile_1, char16_t* path_with_pattern, app::String** file_name, int32_t* file_attr, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x02374520, void*, FindFirstFile_2, app::String* path_with_pattern, app::String** file_name, int32_t* file_attr, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x02374600, bool, FindNextFile, void* hnd, app::String** file_name, int32_t* file_attr, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x02374610, bool, FindCloseFile, void* hnd)
    IL2CPP_REGISTER_METHOD(0x02374630, bool, Exists, app::String* path, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x023746F0, bool, ExistsFile, app::String* path, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x023747C0, bool, ExistsDirectory, app::String* path, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02374890, bool, ExistsSymlink, app::String* path, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02374960, bool, GetFileStat_1, char16_t* path, app::MonoIOStat* stat, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02374A60, bool, GetFileStat_2, app::String* path, app::MonoIOStat* stat, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(
        0x02374C00,
        void*,
        Open_1,
        char16_t* filename,
        app::FileMode__Enum mode,
        app::FileAccess__Enum access,
        app::FileShare__Enum share,
        app::FileOptions__Enum options,
        app::MonoIOError__Enum* error
    )
    IL2CPP_REGISTER_METHOD(
        0x02374CC0,
        void*,
        Open_2,
        app::String* filename,
        app::FileMode__Enum mode,
        app::FileAccess__Enum access,
        app::FileShare__Enum share,
        app::FileOptions__Enum options,
        app::MonoIOError__Enum* error
    )
    IL2CPP_REGISTER_METHOD(0x02374E10, bool, Close, void* handle, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02374E50, int32_t, Read_1, void* handle, app::Byte__Array* dest, int32_t dest_offset, int32_t count, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(
        0x02374EE0,
        int32_t,
        Read_2,
        app::SafeHandle* safe_handle,
        app::Byte__Array* dest,
        int32_t dest_offset,
        int32_t count,
        app::MonoIOError__Enum* error
    )
    IL2CPP_REGISTER_METHOD(0x023750D0, int32_t, Write_1, void* handle, app::Byte__Array* src, int32_t src_offset, int32_t count, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(
        0x02375100,
        int32_t,
        Write_2,
        app::SafeHandle* safe_handle,
        app::Byte__Array* src,
        int32_t src_offset,
        int32_t count,
        app::MonoIOError__Enum* error
    )
    IL2CPP_REGISTER_METHOD(0x023752C0, int64_t, Seek_1, void* handle, int64_t offset, app::SeekOrigin__Enum origin, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(
        0x02375300,
        int64_t,
        Seek_2,
        app::SafeHandle* safe_handle,
        int64_t offset,
        app::SeekOrigin__Enum origin,
        app::MonoIOError__Enum* error
    )
    IL2CPP_REGISTER_METHOD(0x023754B0, int64_t, GetLength_1, void* handle, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x023754F0, int64_t, GetLength_2, app::SafeHandle* safe_handle, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02375680, bool, SetLength_1, void* handle, int64_t length, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02375690, bool, SetLength_2, app::SafeHandle* safe_handle, int64_t length, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(0x02375810, void*, get_ConsoleOutput, )
    IL2CPP_REGISTER_METHOD(0x02375820, void*, get_ConsoleInput, )
    IL2CPP_REGISTER_METHOD(0x02375830, void*, get_ConsoleError, )
    IL2CPP_REGISTER_METHOD(0x02375840, bool, CreatePipe, void** read_handle, void** write_handle, app::MonoIOError__Enum* error)
    IL2CPP_REGISTER_METHOD(
        0x02375890,
        bool,
        DuplicateHandle,
        void* source_process_handle,
        void* source_handle,
        void* target_process_handle,
        void** target_handle,
        int32_t access,
        int32_t inherit,
        int32_t options,
        app::MonoIOError__Enum* error
    )
    IL2CPP_REGISTER_METHOD(0x00E3F290, char16_t, get_VolumeSeparatorChar, )
    IL2CPP_REGISTER_METHOD(0x023758E0, char16_t, get_DirectorySeparatorChar, )
    IL2CPP_REGISTER_METHOD(0x00E3AD20, char16_t, get_AltDirectorySeparatorChar, )
    IL2CPP_REGISTER_METHOD(0x00E40920, char16_t, get_PathSeparator, )
    IL2CPP_REGISTER_METHOD(0x0173D7D0, void, DumpHandles, )
    IL2CPP_REGISTER_METHOD(0x023758F0, bool, RemapPath, app::String* path, app::String** new_path)
    IL2CPP_REGISTER_METHOD(0x02375900, void, cctor, )
} // namespace app::classes::System::IO::MonoIO
