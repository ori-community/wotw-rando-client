#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WaterPoisonCloud.h>
#include <Modloader/app/structs/WaterPoisonCloud_Blob.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::WaterPoisonCloud {
    IL2CPP_REGISTER_METHOD(0x008D8D00, void, EditorInitializeMesh, (app::WaterPoisonCloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D8E50, void, AddBlob, (app::WaterPoisonCloud * this_ptr, app::WaterPoisonCloud_Blob blob))
    IL2CPP_REGISTER_METHOD(0x008D95B0, int32_t, BlobCount, (app::WaterPoisonCloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D9640, app::WaterPoisonCloud_Blob, GetBlob, (app::WaterPoisonCloud * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x008D9710, void, SetBlob, (app::WaterPoisonCloud * this_ptr, app::WaterPoisonCloud_Blob blob, int32_t i))
    IL2CPP_REGISTER_METHOD(0x008D9800, void, RemoveBlob, (app::WaterPoisonCloud * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x008D9BA0, void, Clear, (app::WaterPoisonCloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D9D70, void, Awake, (app::WaterPoisonCloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008DA0A0, void, OnEnable, (app::WaterPoisonCloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008DA170, void, OnDisable, (app::WaterPoisonCloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008DA230, app::Damage*, GetDamageForPosition, (app::WaterPoisonCloud * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x008DA550, bool, GetNearestBlob, (app::WaterPoisonCloud * this_ptr, app::Vector3 position, app::WaterPoisonCloud_Blob* blob, float size_multiplier))
    IL2CPP_REGISTER_METHOD(0x008DA780, void, SetDestroyOnCleared, (app::WaterPoisonCloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008DA820, void, UpdateMesh, (app::WaterPoisonCloud * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x008DAA60, void, InitializeMesh, (app::WaterPoisonCloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008DACB0, void, UpdateBlobData, (app::WaterPoisonCloud * this_ptr, int32_t i, float delta_time))
    IL2CPP_REGISTER_METHOD(0x008DC750, void, SetMeshData, (app::WaterPoisonCloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008DCB70, void, DestroyCloud, (app::WaterPoisonCloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008DCC60, void, OnDrawGizmos, (app::WaterPoisonCloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008DCD60, void, ctor, (app::WaterPoisonCloud * this_ptr))
} // namespace app::classes::WaterPoisonCloud
