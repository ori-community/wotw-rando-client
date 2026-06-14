#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringFacetsChecker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringFacetsChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringFacetsChecker_DEFINED)
#define IL2CPP_STRUCT_StringFacetsChecker_DEFINED
struct StringFacetsChecker__Class;
struct StringFacetsChecker {
    struct StringFacetsChecker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_StringFacetsChecker_FWDDECL)
#define IL2CPP_STRUCT_StringFacetsChecker_FWDDECL
#include <Modloader/app/structs/StringFacetsChecker__Class.h>
#endif
#undef IL2CPP_STRUCT_StringFacetsChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringFacetsChecker_DEFINED) && !defined(IL2CPP_STRUCT_StringFacetsChecker_FWDDECL)
#include <Modloader/app/structs/StringFacetsChecker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringFacetsChecker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
