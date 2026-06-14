#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Ephemeron__Array.h>
#include <Modloader/app/structs/GCCollectionMode__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::GC {
    IL2CPP_REGISTER_METHOD(0x01A1CB50, int32_t, GetCollectionCount, int32_t generation)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetMaxGeneration, )
    IL2CPP_REGISTER_METHOD(0x01A1CB60, void, InternalCollect, int32_t generation)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, register_ephemeron_array, app::Ephemeron__Array* array)
    IL2CPP_REGISTER_METHOD(0x01A1CB80, app::Object*, get_ephemeron_tombstone, )
    IL2CPP_REGISTER_METHOD(0x01A1CC50, void, Collect_1, int32_t generation)
    IL2CPP_REGISTER_METHOD(0x01A1CCF0, void, Collect_2, )
    IL2CPP_REGISTER_METHOD(0x01A1CDA0, void, Collect_3, int32_t generation, app::GCCollectionMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x01A1CE50, void, Collect_4, int32_t generation, app::GCCollectionMode__Enum mode, bool blocking)
    IL2CPP_REGISTER_METHOD(0x01A1D010, void, Collect_5, int32_t generation, app::GCCollectionMode__Enum mode, bool blocking, bool compacting)
    IL2CPP_REGISTER_METHOD(0x01A1D150, int32_t, CollectionCount, int32_t generation)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, KeepAlive, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01A1D240, int32_t, get_MaxGeneration, )
    IL2CPP_REGISTER_METHOD(0x01A1D2D0, void, _SuppressFinalize, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x01A1D3C0, void, SuppressFinalize, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01A1D540, void, _ReRegisterForFinalize, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x01A1D640, void, ReRegisterForFinalize, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01A1D7C0, int64_t, GetTotalMemory, bool force_full_collection)
    IL2CPP_REGISTER_METHOD(0x01A1D7F0, void, cctor, )
} // namespace app::classes::System::GC
