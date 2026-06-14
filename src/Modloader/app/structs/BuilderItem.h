#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderItem_DEFINED)
#include <Modloader/app/structs/BuilderItem__Fields.h>
#if defined(IL2CPP_STRUCT_BuilderItem__Fields_DEFINED)
#define IL2CPP_STRUCT_BuilderItem_DEFINED
struct BuilderItem__Class;
struct BuilderItem {
    struct BuilderItem__Class* klass;
    MonitorData* monitor;
    struct BuilderItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuilderItem_FWDDECL)
#define IL2CPP_STRUCT_BuilderItem_FWDDECL
#include <Modloader/app/structs/BuilderItem__Class.h>
#endif
#undef IL2CPP_STRUCT_BuilderItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderItem_DEFINED) && !defined(IL2CPP_STRUCT_BuilderItem_FWDDECL)
#include <Modloader/app/structs/BuilderItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
