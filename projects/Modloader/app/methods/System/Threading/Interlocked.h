#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::Interlocked {
    IL2CPP_REGISTER_METHOD(0x027DE190, int32_t, CompareExchange_1, (int32_t * location1, int32_t value, int32_t comparand))
    IL2CPP_REGISTER_METHOD(0x027DE1A0, int32_t, CompareExchange_2, (int32_t * location1, int32_t value, int32_t comparand, bool* succeeded))
    IL2CPP_REGISTER_METHOD(0x027DE1B0, app::Object*, CompareExchange_3, (app::Object * *location1, app::Object* value, app::Object* comparand))
    IL2CPP_REGISTER_METHOD(0x027DE1C0, float, CompareExchange_4, (float* location1, float value, float comparand))
    IL2CPP_REGISTER_METHOD(0x027DE1F0, int32_t, Decrement, (int32_t * location))
    IL2CPP_REGISTER_METHOD(0x027DE200, int32_t, Increment_1, (int32_t * location))
    IL2CPP_REGISTER_METHOD(0x027DE210, int64_t, Increment_2, (int64_t * location))
    IL2CPP_REGISTER_METHOD(0x027DE220, int32_t, Exchange_1, (int32_t * location1, int32_t value))
    IL2CPP_REGISTER_METHOD(0x027DE230, app::Object*, Exchange_2, (app::Object * *location1, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x027DE240, float, Exchange_3, (float* location1, float value))
    IL2CPP_REGISTER_METHOD(0x027DE1B0, int64_t, CompareExchange_5, (int64_t * location1, int64_t value, int64_t comparand))
    IL2CPP_REGISTER_METHOD(0x027DE1B0, void*, CompareExchange_6, (app::void** location1, void* value, void* comparand))
    IL2CPP_REGISTER_METHOD(0x027DE260, double, CompareExchange_7, (double* location1, double value, double comparand))
    IL2CPP_REGISTER_METHOD(0x027DE230, int64_t, Exchange_4, (int64_t * location1, int64_t value))
    IL2CPP_REGISTER_METHOD(0x027DE230, void*, Exchange_5, (app::void** location1, void* value))
    IL2CPP_REGISTER_METHOD(0x027DE290, double, Exchange_6, (double* location1, double value))
    IL2CPP_REGISTER_METHOD(0x027DE2B0, int64_t, Read, (int64_t * location))
    IL2CPP_REGISTER_METHOD(0x027DE2C0, int32_t, Add, (int32_t * location1, int32_t value))
    IL2CPP_REGISTER_METHOD(0x023437F0, void, MemoryBarrier, ())
} // namespace app::classes::System::Threading::Interlocked
