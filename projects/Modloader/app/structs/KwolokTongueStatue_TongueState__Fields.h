#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokTongueStatue_TongueState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokTongueStatue_TongueState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokTongueStatue_TongueState__Fields_DEFINED)
#include <Modloader/app/structs/KwolokTongueStatue_KwolowTongueStatueState__Enum.h>
#if defined(IL2CPP_STRUCT_KwolokTongueStatue_KwolowTongueStatueState__Enum_DEFINED)
#define IL2CPP_STRUCT_KwolokTongueStatue_TongueState__Fields_DEFINED
struct KwolokTongueStatue;
struct DesiredUberStateByte;
struct MoonTimeline;
struct __declspec(align(8)) KwolokTongueStatue_TongueState__Fields {
    KwolokTongueStatue_KwolowTongueStatueState__Enum m_desiredStateEnum;

    struct KwolokTongueStatue* m_owner;
    struct DesiredUberStateByte* m_desiredByteState;
    struct MoonTimeline* m_timeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokTongueStatue_TongueState__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokTongueStatue_TongueState__Fields_FWDDECL
#include <Modloader/app/structs/DesiredUberStateByte.h>
#include <Modloader/app/structs/KwolokTongueStatue.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_KwolokTongueStatue_TongueState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokTongueStatue_TongueState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokTongueStatue_TongueState__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokTongueStatue_TongueState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokTongueStatue_TongueState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
