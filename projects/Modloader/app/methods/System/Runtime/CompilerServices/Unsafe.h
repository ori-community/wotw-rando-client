#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::CompilerServices::Unsafe {
    IL2CPP_REGISTER_METHOD(0x0157E120, app::Object**, Add_1, (app::Object * *source, int32_t element_offset))
    IL2CPP_REGISTER_METHOD(0x0157E130, app::Object**, AddByteOffset_1, (app::Object * *source, void* byte_offset))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, As, (app::Object * o))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object**, AsRef_1, (app::Void * source))
    IL2CPP_REGISTER_METHOD(0x0153B7B0, void*, ByteOffset_1, (app::Object * *origin, app::Object** target))
    IL2CPP_REGISTER_METHOD(0x0157A790, app::Object*, Read, (app::Void * source))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, int32_t, SizeOf, ())
    IL2CPP_REGISTER_METHOD(0x0153B7B0, void*, ByteOffset_2, (uint8_t * origin, uint8_t* target))
    IL2CPP_REGISTER_METHOD(0x0153B7B0, void*, ByteOffset_3, (uint16_t * origin, uint16_t* target))
    IL2CPP_REGISTER_METHOD(0x0157E100, uint8_t*, Add_2, (uint8_t * source, int32_t element_offset))
    IL2CPP_REGISTER_METHOD(0x0157E110, uint16_t*, Add_3, (uint16_t * source, int32_t element_offset))
    IL2CPP_REGISTER_METHOD(0x0157E130, uint8_t*, AddByteOffset_2, (uint8_t * source, void* byte_offset))
    IL2CPP_REGISTER_METHOD(0x0157E130, uint16_t*, AddByteOffset_3, (uint16_t * source, void* byte_offset))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint8_t*, AsRef_2, (app::Void * source))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint16_t*, AsRef_3, (app::Void * source))
} // namespace app::classes::System::Runtime::CompilerServices::Unsafe
