#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortKey_DEFINED)
#include <Modloader/app/structs/SortKey__Fields.h>
#if defined(IL2CPP_STRUCT_SortKey__Fields_DEFINED)
#define IL2CPP_STRUCT_SortKey_DEFINED
struct SortKey__Class;
struct SortKey {
    struct SortKey__Class* klass;
    MonitorData* monitor;
    struct SortKey__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SortKey_FWDDECL)
#define IL2CPP_STRUCT_SortKey_FWDDECL
#include <Modloader/app/structs/SortKey__Class.h>
#endif
#undef IL2CPP_STRUCT_SortKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortKey_DEFINED) && !defined(IL2CPP_STRUCT_SortKey_FWDDECL)
#include <Modloader/app/structs/SortKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
