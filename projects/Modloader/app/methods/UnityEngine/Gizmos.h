#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Matrix4x4.h>

namespace app::classes::UnityEngine::Gizmos {
    IL2CPP_REGISTER_METHOD(0x025295F0, void, DrawLine, (app::Vector3 from, app::Vector3 to))
    IL2CPP_REGISTER_METHOD(0x02529650, void, DrawWireSphere, (app::Vector3 center, float radius))
    IL2CPP_REGISTER_METHOD(0x025296B0, void, DrawSphere, (app::Vector3 center, float radius))
    IL2CPP_REGISTER_METHOD(0x02529710, void, DrawWireCube, (app::Vector3 center, app::Vector3 size))
    IL2CPP_REGISTER_METHOD(0x02529770, void, DrawCube, (app::Vector3 center, app::Vector3 size))
    IL2CPP_REGISTER_METHOD(0x025297D0, void, DrawWireMesh_1, (app::Mesh * mesh, int32_t submesh_index, app::Vector3 position, app::Quaternion rotation, app::Vector3 scale))
    IL2CPP_REGISTER_METHOD(0x02529860, void, DrawIcon, (app::Vector3 center, app::String* name, bool allow_scaling))
    IL2CPP_REGISTER_METHOD(0x025298E0, app::Color, get_color, ())
    IL2CPP_REGISTER_METHOD(0x02529950, void, set_color, (app::Color value))
    IL2CPP_REGISTER_METHOD(0x025299A0, void, set_matrix, (app::Matrix4x4 value))
    IL2CPP_REGISTER_METHOD(0x025299F0, void, DrawRay, (app::Vector3 from, app::Vector3 direction))
    IL2CPP_REGISTER_METHOD(0x02529B50, void, DrawWireMesh_2, (app::Mesh * mesh, app::Vector3 position, app::Quaternion rotation, app::Vector3 scale))
    IL2CPP_REGISTER_METHOD(0x02529BF0, void, DrawLine_Injected, (app::Vector3 * from, app::Vector3* to))
    IL2CPP_REGISTER_METHOD(0x02529C50, void, DrawWireSphere_Injected, (app::Vector3 * center, float radius))
    IL2CPP_REGISTER_METHOD(0x02529CB0, void, DrawSphere_Injected, (app::Vector3 * center, float radius))
    IL2CPP_REGISTER_METHOD(0x02529D10, void, DrawWireCube_Injected, (app::Vector3 * center, app::Vector3* size))
    IL2CPP_REGISTER_METHOD(0x02529D70, void, DrawCube_Injected, (app::Vector3 * center, app::Vector3* size))
    IL2CPP_REGISTER_METHOD(0x02529DD0, void, DrawWireMesh_Injected, (app::Mesh * mesh, int32_t submesh_index, app::Vector3* position, app::Quaternion* rotation, app::Vector3* scale))
    IL2CPP_REGISTER_METHOD(0x02529E50, void, DrawIcon_Injected, (app::Vector3 * center, app::String* name, bool allow_scaling))
    IL2CPP_REGISTER_METHOD(0x02529ED0, void, get_color_Injected, (app::Color * ret))
    IL2CPP_REGISTER_METHOD(0x02529F20, void, set_color_Injected, (app::Color * value))
    IL2CPP_REGISTER_METHOD(0x02529F70, void, set_matrix_Injected, (app::Matrix4x4 * value))
} // namespace app::classes::UnityEngine::Gizmos
