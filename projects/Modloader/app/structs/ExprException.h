#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExprException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExprException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExprException_DEFINED)
#define IL2CPP_STRUCT_ExprException_DEFINED
struct ExprException__Class;
struct ExprException {
    struct ExprException__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExprException_FWDDECL)
#define IL2CPP_STRUCT_ExprException_FWDDECL
#include <Modloader/app/structs/ExprException__Class.h>
#endif
#undef IL2CPP_STRUCT_ExprException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExprException_DEFINED) && !defined(IL2CPP_STRUCT_ExprException_FWDDECL)
#include <Modloader/app/structs/ExprException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExprException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
