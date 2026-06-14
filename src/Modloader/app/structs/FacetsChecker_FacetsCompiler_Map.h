#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_Map_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_Map_INITIALIZING
#if !defined(IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_Map_DEFINED)
#define IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_Map_DEFINED
struct String;
struct FacetsChecker_FacetsCompiler_Map {
    uint16_t match;
    struct String* replacement;
};
#endif
#if !defined(IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_Map_FWDDECL)
#define IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_Map_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_Map_INITIALIZING
#if !defined(IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_Map_DEFINED) && !defined(IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_Map_FWDDECL)
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler_Map.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler_Map.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
