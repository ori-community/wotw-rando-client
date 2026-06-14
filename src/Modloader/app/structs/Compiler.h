#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Compiler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Compiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_Compiler_DEFINED)
#include <Modloader/app/structs/Compiler__Fields.h>
#if defined(IL2CPP_STRUCT_Compiler__Fields_DEFINED)
#define IL2CPP_STRUCT_Compiler_DEFINED
struct Compiler__Class;
struct Compiler {
    struct Compiler__Class* klass;
    MonitorData* monitor;
    struct Compiler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Compiler_FWDDECL)
#define IL2CPP_STRUCT_Compiler_FWDDECL
#include <Modloader/app/structs/Compiler__Class.h>
#endif
#undef IL2CPP_STRUCT_Compiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_Compiler_DEFINED) && !defined(IL2CPP_STRUCT_Compiler_FWDDECL)
#include <Modloader/app/structs/Compiler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Compiler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
