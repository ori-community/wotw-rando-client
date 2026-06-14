#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DivideByZeroException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DivideByZeroException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DivideByZeroException_DEFINED)
#include <Modloader/app/structs/DivideByZeroException__Fields.h>
#if defined(IL2CPP_STRUCT_DivideByZeroException__Fields_DEFINED)
#define IL2CPP_STRUCT_DivideByZeroException_DEFINED
struct DivideByZeroException__Class;
struct DivideByZeroException {
    struct DivideByZeroException__Class* klass;
    MonitorData* monitor;
    struct DivideByZeroException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DivideByZeroException_FWDDECL)
#define IL2CPP_STRUCT_DivideByZeroException_FWDDECL
#include <Modloader/app/structs/DivideByZeroException__Class.h>
#endif
#undef IL2CPP_STRUCT_DivideByZeroException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DivideByZeroException_DEFINED) && !defined(IL2CPP_STRUCT_DivideByZeroException_FWDDECL)
#include <Modloader/app/structs/DivideByZeroException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DivideByZeroException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
