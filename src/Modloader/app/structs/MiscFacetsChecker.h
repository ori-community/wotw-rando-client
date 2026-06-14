#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MiscFacetsChecker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MiscFacetsChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_MiscFacetsChecker_DEFINED)
#define IL2CPP_STRUCT_MiscFacetsChecker_DEFINED
struct MiscFacetsChecker__Class;
struct MiscFacetsChecker {
    struct MiscFacetsChecker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MiscFacetsChecker_FWDDECL)
#define IL2CPP_STRUCT_MiscFacetsChecker_FWDDECL
#include <Modloader/app/structs/MiscFacetsChecker__Class.h>
#endif
#undef IL2CPP_STRUCT_MiscFacetsChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_MiscFacetsChecker_DEFINED) && !defined(IL2CPP_STRUCT_MiscFacetsChecker_FWDDECL)
#include <Modloader/app/structs/MiscFacetsChecker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MiscFacetsChecker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
