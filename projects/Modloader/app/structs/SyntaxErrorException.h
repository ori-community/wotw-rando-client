#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SyntaxErrorException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SyntaxErrorException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SyntaxErrorException_DEFINED)
#include <Modloader/app/structs/SyntaxErrorException__Fields.h>
#if defined(IL2CPP_STRUCT_SyntaxErrorException__Fields_DEFINED)
#define IL2CPP_STRUCT_SyntaxErrorException_DEFINED
struct SyntaxErrorException__Class;
struct SyntaxErrorException {
    struct SyntaxErrorException__Class* klass;
    MonitorData* monitor;
    struct SyntaxErrorException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SyntaxErrorException_FWDDECL)
#define IL2CPP_STRUCT_SyntaxErrorException_FWDDECL
#include <Modloader/app/structs/SyntaxErrorException__Class.h>
#endif
#undef IL2CPP_STRUCT_SyntaxErrorException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SyntaxErrorException_DEFINED) && !defined(IL2CPP_STRUCT_SyntaxErrorException_FWDDECL)
#include <Modloader/app/structs/SyntaxErrorException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SyntaxErrorException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
