#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArithmeticException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArithmeticException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArithmeticException_DEFINED)
#include <Modloader/app/structs/ArithmeticException__Fields.h>
#if defined(IL2CPP_STRUCT_ArithmeticException__Fields_DEFINED)
#define IL2CPP_STRUCT_ArithmeticException_DEFINED
struct ArithmeticException__Class;
struct ArithmeticException {
    struct ArithmeticException__Class* klass;
    MonitorData* monitor;
    struct ArithmeticException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArithmeticException_FWDDECL)
#define IL2CPP_STRUCT_ArithmeticException_FWDDECL
#include <Modloader/app/structs/ArithmeticException__Class.h>
#endif
#undef IL2CPP_STRUCT_ArithmeticException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArithmeticException_DEFINED) && !defined(IL2CPP_STRUCT_ArithmeticException_FWDDECL)
#include <Modloader/app/structs/ArithmeticException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArithmeticException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
