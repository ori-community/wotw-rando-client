#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Statics__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Statics__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Statics__StaticFields_DEFINED)
#include <Modloader/app/structs/TraceLoggingDataType__Enum.h>
#if defined(IL2CPP_STRUCT_TraceLoggingDataType__Enum_DEFINED)
#define IL2CPP_STRUCT_Statics__StaticFields_DEFINED
struct Statics__StaticFields {
    TraceLoggingDataType__Enum IntPtrType;

    TraceLoggingDataType__Enum UIntPtrType;

    TraceLoggingDataType__Enum HexIntPtrType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Statics__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Statics__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Statics__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Statics__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Statics__StaticFields_FWDDECL)
#include <Modloader/app/structs/Statics__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Statics__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
