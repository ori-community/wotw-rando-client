#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler {
    IL2CPP_REGISTER_METHOD(0x029688E0, void, add_snapshotFinished, (app::Action_2_String_Boolean_ * value))
    IL2CPP_REGISTER_METHOD(0x029689E0, void, remove_snapshotFinished, (app::Action_2_String_Boolean_ * value))
    IL2CPP_REGISTER_METHOD(0x02968AE0, void, TakeSnapshotInternal, (app::String * path, uint32_t capture_flag))
    IL2CPP_REGISTER_METHOD(0x02968B40, void, TakeSnapshot, (app::String * path, app::Action_2_String_Boolean_* finish_callback, app::CaptureFlags__Enum capture_flags))
    IL2CPP_REGISTER_METHOD(0x02968D50, app::Byte__Array*, PrepareMetadata, ())
    IL2CPP_REGISTER_METHOD(0x02969330, int32_t, WriteIntToByteArray, (app::Byte__Array * array, int32_t offset, int32_t value))
    IL2CPP_REGISTER_METHOD(0x029693E0, int32_t, WriteStringToByteArray, (app::Byte__Array * array, int32_t offset, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02969460, void, FinalizeSnapshot, (app::String * path, bool result))
} // namespace app::classes::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler
