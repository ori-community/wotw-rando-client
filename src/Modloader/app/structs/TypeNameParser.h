#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeNameParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeNameParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeNameParser_DEFINED)
#define IL2CPP_STRUCT_TypeNameParser_DEFINED
struct TypeNameParser__Class;
struct TypeNameParser {
    struct TypeNameParser__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeNameParser_FWDDECL)
#define IL2CPP_STRUCT_TypeNameParser_FWDDECL
#include <Modloader/app/structs/TypeNameParser__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeNameParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeNameParser_DEFINED) && !defined(IL2CPP_STRUCT_TypeNameParser_FWDDECL)
#include <Modloader/app/structs/TypeNameParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeNameParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
