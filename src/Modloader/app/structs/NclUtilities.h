#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NclUtilities_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NclUtilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_NclUtilities_DEFINED)
#define IL2CPP_STRUCT_NclUtilities_DEFINED
struct NclUtilities__Class;
struct NclUtilities {
    struct NclUtilities__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NclUtilities_FWDDECL)
#define IL2CPP_STRUCT_NclUtilities_FWDDECL
#include <Modloader/app/structs/NclUtilities__Class.h>
#endif
#undef IL2CPP_STRUCT_NclUtilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_NclUtilities_DEFINED) && !defined(IL2CPP_STRUCT_NclUtilities_FWDDECL)
#include <Modloader/app/structs/NclUtilities.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NclUtilities.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
