#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Expression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Expression_INITIALIZING
#if !defined(IL2CPP_STRUCT_Expression_DEFINED)
#define IL2CPP_STRUCT_Expression_DEFINED
struct Expression__Class;
struct Expression {
    struct Expression__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Expression_FWDDECL)
#define IL2CPP_STRUCT_Expression_FWDDECL
#include <Modloader/app/structs/Expression__Class.h>
#endif
#undef IL2CPP_STRUCT_Expression_INITIALIZING
#if !defined(IL2CPP_STRUCT_Expression_DEFINED) && !defined(IL2CPP_STRUCT_Expression_FWDDECL)
#include <Modloader/app/structs/Expression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Expression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
