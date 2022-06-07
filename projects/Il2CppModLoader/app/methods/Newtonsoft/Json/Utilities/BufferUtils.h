#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::BufferUtils {
    IL2CPP_REGISTER_METHOD(0x01C009C0, app::Char__Array *, RentBuffer, (app::IArrayPool_1_System_Char_ * buffer_pool, int32_t min_size))
    IL2CPP_REGISTER_METHOD(0x01C00A70, void, ReturnBuffer, (app::IArrayPool_1_System_Char_ * buffer_pool, app::Char__Array * buffer))
    IL2CPP_REGISTER_METHOD(0x01C00B00, app::Char__Array *, EnsureBufferSize, (app::IArrayPool_1_System_Char_ * buffer_pool, int32_t size, app::Char__Array * buffer))
}
