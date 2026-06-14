#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvalidExpressionException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvalidExpressionException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidExpressionException_DEFINED)
#include <Modloader/app/structs/InvalidExpressionException__Fields.h>
#if defined(IL2CPP_STRUCT_InvalidExpressionException__Fields_DEFINED)
#define IL2CPP_STRUCT_InvalidExpressionException_DEFINED
struct InvalidExpressionException__Class;
struct InvalidExpressionException {
    struct InvalidExpressionException__Class* klass;
    MonitorData* monitor;
    struct InvalidExpressionException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvalidExpressionException_FWDDECL)
#define IL2CPP_STRUCT_InvalidExpressionException_FWDDECL
#include <Modloader/app/structs/InvalidExpressionException__Class.h>
#endif
#undef IL2CPP_STRUCT_InvalidExpressionException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidExpressionException_DEFINED) && !defined(IL2CPP_STRUCT_InvalidExpressionException_FWDDECL)
#include <Modloader/app/structs/InvalidExpressionException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvalidExpressionException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
