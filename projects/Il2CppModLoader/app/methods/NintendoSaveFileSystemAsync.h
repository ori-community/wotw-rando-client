#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::NintendoSaveFileSystemAsync {
    IL2CPP_REGISTER_METHOD(0x031120B0, void, SubmitWriteRequestAsync, (app::String * path, app::Byte__Array* data, int32_t file_size_in_bytes, bool overwrite, bool is_from_copy_request))
    IL2CPP_REGISTER_METHOD(0x03112340, void, SubmitCopyRequestAsync, (app::String * source, app::String* dest, bool overwrite))
    IL2CPP_REGISTER_METHOD(0x03112630, void, Main, ())
    IL2CPP_REGISTER_METHOD(0x03112960, void, FlushQueue, ())
    IL2CPP_REGISTER_METHOD(0x03112B70, void, HandleQueueLockFree, ())
    IL2CPP_REGISTER_METHOD(0x03112CF0, void, Write, (app::NSAsyncQueueInfo * info))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Copy, (app::NSAsyncQueueInfo * info))
    IL2CPP_REGISTER_METHOD(0x03112D80, void, Debug, (app::String * text))
    IL2CPP_REGISTER_METHOD(0x03112E20, void, DebugError, (app::String * text))
    IL2CPP_REGISTER_METHOD(0x03112EC0, void, DebugException, (app::Exception * e))
    IL2CPP_REGISTER_METHOD(0x03112F60, void, LockDebug, (app::String * text))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NintendoSaveFileSystemAsync * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03113040, void, cctor, ())
} // namespace app::classes::NintendoSaveFileSystemAsync
