#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexPrefix_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexPrefix_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexPrefix_DEFINED)
#include <Modloader/app/structs/RegexPrefix__Fields.h>
#if defined(IL2CPP_STRUCT_RegexPrefix__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexPrefix_DEFINED
struct RegexPrefix__Class;
struct RegexPrefix {
    struct RegexPrefix__Class* klass;
    MonitorData* monitor;
    struct RegexPrefix__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexPrefix_FWDDECL)
#define IL2CPP_STRUCT_RegexPrefix_FWDDECL
#include <Modloader/app/structs/RegexPrefix__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexPrefix_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexPrefix_DEFINED) && !defined(IL2CPP_STRUCT_RegexPrefix_FWDDECL)
#include <Modloader/app/structs/RegexPrefix.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexPrefix.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
