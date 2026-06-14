#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DeflateStreamNative_UnmanagedReadOrWrite.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::DeflateStreamNative_UnmanagedReadOrWrite* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02009B10, int32_t, Invoke, app::DeflateStreamNative_UnmanagedReadOrWrite* this_ptr, void* buffer, int32_t length, void* data)
    IL2CPP_REGISTER_METHOD(
        0x02009EB0,
        app::IAsyncResult*,
        BeginInvoke,
        app::DeflateStreamNative_UnmanagedReadOrWrite* this_ptr,
        void* buffer,
        int32_t length,
        void* data,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, app::DeflateStreamNative_UnmanagedReadOrWrite* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite
