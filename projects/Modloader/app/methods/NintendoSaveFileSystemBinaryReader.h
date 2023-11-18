#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NintendoSaveFileSystemBinaryReader.h>

namespace app::classes::NintendoSaveFileSystemBinaryReader {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::NintendoSaveFileSystemBinaryReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NintendoSaveFileSystemBinaryReader * this_ptr))
} // namespace app::classes::NintendoSaveFileSystemBinaryReader
