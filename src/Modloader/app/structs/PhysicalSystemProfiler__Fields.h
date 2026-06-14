#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalSystemProfiler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalSystemProfiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemProfiler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicalSystemProfiler__Fields_DEFINED
struct Dictionary_2_System_Int32_System_String_;
struct List_1_PhysicalSystemProfiler_UpdateInfo_;
struct GUIStyle;
struct String;
struct PhysicalSystemProfiler__Fields {
    struct MonoBehaviour__Fields _;
    struct Dictionary_2_System_Int32_System_String_* m_hashToObjectName;
    struct List_1_PhysicalSystemProfiler_UpdateInfo_* m_updates;
    bool m_imGuiRegistered;
    struct GUIStyle* m_labelStyle;
    struct String* m_renderString;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicalSystemProfiler__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicalSystemProfiler__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_String_.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/List_1_PhysicalSystemProfiler_UpdateInfo_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PhysicalSystemProfiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemProfiler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalSystemProfiler__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicalSystemProfiler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalSystemProfiler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
