#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_decimal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_decimal_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_decimal_DEFINED)
#include <Modloader/app/structs/Datatype_decimal__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_decimal__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_decimal_DEFINED
struct Datatype_decimal__Class;
struct Datatype_decimal {
    struct Datatype_decimal__Class* klass;
    MonitorData* monitor;
    struct Datatype_decimal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_decimal_FWDDECL)
#define IL2CPP_STRUCT_Datatype_decimal_FWDDECL
#include <Modloader/app/structs/Datatype_decimal__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_decimal_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_decimal_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_decimal_FWDDECL)
#include <Modloader/app/structs/Datatype_decimal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_decimal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
