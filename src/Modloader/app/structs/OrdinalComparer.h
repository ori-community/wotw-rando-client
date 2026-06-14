#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OrdinalComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OrdinalComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrdinalComparer_DEFINED)
#include <Modloader/app/structs/OrdinalComparer__Fields.h>
#if defined(IL2CPP_STRUCT_OrdinalComparer__Fields_DEFINED)
#define IL2CPP_STRUCT_OrdinalComparer_DEFINED
struct OrdinalComparer__Class;
struct OrdinalComparer {
    struct OrdinalComparer__Class* klass;
    MonitorData* monitor;
    struct OrdinalComparer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OrdinalComparer_FWDDECL)
#define IL2CPP_STRUCT_OrdinalComparer_FWDDECL
#include <Modloader/app/structs/OrdinalComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_OrdinalComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrdinalComparer_DEFINED) && !defined(IL2CPP_STRUCT_OrdinalComparer_FWDDECL)
#include <Modloader/app/structs/OrdinalComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OrdinalComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
