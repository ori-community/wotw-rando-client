#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderPlaceholder_DEFINED)
#include <Modloader/app/structs/BuilderPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_BuilderPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_BuilderPlaceholder_DEFINED
struct BuilderPlaceholder__Class;
struct BuilderPlaceholder {
    struct BuilderPlaceholder__Class* klass;
    MonitorData* monitor;
    struct BuilderPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuilderPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_BuilderPlaceholder_FWDDECL
#include <Modloader/app/structs/BuilderPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_BuilderPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_BuilderPlaceholder_FWDDECL)
#include <Modloader/app/structs/BuilderPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
