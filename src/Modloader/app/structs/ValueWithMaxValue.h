#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueWithMaxValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueWithMaxValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueWithMaxValue_DEFINED)
#include <Modloader/app/structs/ValueWithMaxValue__Fields.h>
#if defined(IL2CPP_STRUCT_ValueWithMaxValue__Fields_DEFINED)
#define IL2CPP_STRUCT_ValueWithMaxValue_DEFINED
struct ValueWithMaxValue__Class;
struct ValueWithMaxValue {
    struct ValueWithMaxValue__Class* klass;
    MonitorData* monitor;
    struct ValueWithMaxValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValueWithMaxValue_FWDDECL)
#define IL2CPP_STRUCT_ValueWithMaxValue_FWDDECL
#include <Modloader/app/structs/ValueWithMaxValue__Class.h>
#endif
#undef IL2CPP_STRUCT_ValueWithMaxValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueWithMaxValue_DEFINED) && !defined(IL2CPP_STRUCT_ValueWithMaxValue_FWDDECL)
#include <Modloader/app/structs/ValueWithMaxValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueWithMaxValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
