#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixupHolderList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixupHolderList_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixupHolderList_DEFINED)
#include <Modloader/app/structs/FixupHolderList__Fields.h>
#if defined(IL2CPP_STRUCT_FixupHolderList__Fields_DEFINED)
#define IL2CPP_STRUCT_FixupHolderList_DEFINED
struct FixupHolderList__Class;
struct FixupHolderList {
    struct FixupHolderList__Class* klass;
    MonitorData* monitor;
    struct FixupHolderList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixupHolderList_FWDDECL)
#define IL2CPP_STRUCT_FixupHolderList_FWDDECL
#include <Modloader/app/structs/FixupHolderList__Class.h>
#endif
#undef IL2CPP_STRUCT_FixupHolderList_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixupHolderList_DEFINED) && !defined(IL2CPP_STRUCT_FixupHolderList_FWDDECL)
#include <Modloader/app/structs/FixupHolderList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixupHolderList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
