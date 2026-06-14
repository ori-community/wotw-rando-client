#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompilationRelaxationsAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompilationRelaxationsAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompilationRelaxationsAttribute_DEFINED)
#include <Modloader/app/structs/CompilationRelaxationsAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_CompilationRelaxationsAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_CompilationRelaxationsAttribute_DEFINED
struct CompilationRelaxationsAttribute__Class;
struct CompilationRelaxationsAttribute {
    struct CompilationRelaxationsAttribute__Class* klass;
    MonitorData* monitor;
    struct CompilationRelaxationsAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompilationRelaxationsAttribute_FWDDECL)
#define IL2CPP_STRUCT_CompilationRelaxationsAttribute_FWDDECL
#include <Modloader/app/structs/CompilationRelaxationsAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_CompilationRelaxationsAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompilationRelaxationsAttribute_DEFINED) && !defined(IL2CPP_STRUCT_CompilationRelaxationsAttribute_FWDDECL)
#include <Modloader/app/structs/CompilationRelaxationsAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompilationRelaxationsAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
