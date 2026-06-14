#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FacetsChecker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FacetsChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_FacetsChecker_DEFINED)
#define IL2CPP_STRUCT_FacetsChecker_DEFINED
struct FacetsChecker__Class;
struct FacetsChecker {
    struct FacetsChecker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FacetsChecker_FWDDECL)
#define IL2CPP_STRUCT_FacetsChecker_FWDDECL
#include <Modloader/app/structs/FacetsChecker__Class.h>
#endif
#undef IL2CPP_STRUCT_FacetsChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_FacetsChecker_DEFINED) && !defined(IL2CPP_STRUCT_FacetsChecker_FWDDECL)
#include <Modloader/app/structs/FacetsChecker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FacetsChecker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
