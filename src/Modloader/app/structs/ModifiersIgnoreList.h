#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModifiersIgnoreList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModifiersIgnoreList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifiersIgnoreList_DEFINED)
#include <Modloader/app/structs/ModifiersIgnoreList__Fields.h>
#if defined(IL2CPP_STRUCT_ModifiersIgnoreList__Fields_DEFINED)
#define IL2CPP_STRUCT_ModifiersIgnoreList_DEFINED
struct ModifiersIgnoreList__Class;
struct ModifiersIgnoreList {
    struct ModifiersIgnoreList__Class* klass;
    MonitorData* monitor;
    struct ModifiersIgnoreList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ModifiersIgnoreList_FWDDECL)
#define IL2CPP_STRUCT_ModifiersIgnoreList_FWDDECL
#include <Modloader/app/structs/ModifiersIgnoreList__Class.h>
#endif
#undef IL2CPP_STRUCT_ModifiersIgnoreList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifiersIgnoreList_DEFINED) && !defined(IL2CPP_STRUCT_ModifiersIgnoreList_FWDDECL)
#include <Modloader/app/structs/ModifiersIgnoreList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModifiersIgnoreList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
