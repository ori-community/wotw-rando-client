#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields_DEFINED
struct GameObject;
struct Transform;
struct MoonVector3;
struct __declspec(align(8)) KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields {
    struct GameObject* GraphicsRoot;
    struct Transform* TonguePlataform;
    struct MoonVector3* PartiallyOpenedLocalPosition;
    struct Vector3 m_resolvedPartiallyOpenedLocalPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokTongueStatue_AdvancedKwolokTongueStatueSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
