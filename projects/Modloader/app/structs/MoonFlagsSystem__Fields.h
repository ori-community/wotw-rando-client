#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonFlagsSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonFlagsSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonFlagsSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonFlagsSystem__Fields_DEFINED
struct List_1_System_Int32_;
struct Dictionary_2_System_Int32_MoonFlagsSystem_ObjectState_;
struct List_1_MoonFlagsSystem_ObjectState_;
struct __declspec(align(8)) MoonFlagsSystem__Fields {
    struct List_1_System_Int32_* m_trackedObjectIDs;
    struct Dictionary_2_System_Int32_MoonFlagsSystem_ObjectState_* m_objectStateByID;
    struct List_1_MoonFlagsSystem_ObjectState_* m_objectStatePool;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonFlagsSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonFlagsSystem__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_MoonFlagsSystem_ObjectState_.h>
#include <Modloader/app/structs/List_1_MoonFlagsSystem_ObjectState_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_MoonFlagsSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonFlagsSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonFlagsSystem__Fields_FWDDECL)
#include <Modloader/app/structs/MoonFlagsSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonFlagsSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
