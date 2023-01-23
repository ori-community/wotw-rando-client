#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_dateTimeBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_dateTimeBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_dateTimeBase__Fields_DEFINED)
#include <Modloader/app/structs/Datatype_anySimpleType__Fields.h>
#include <Modloader/app/structs/XsdDateTimeFlags__Enum.h>
#if defined(IL2CPP_STRUCT_Datatype_anySimpleType__Fields_DEFINED) && defined(IL2CPP_STRUCT_XsdDateTimeFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_Datatype_dateTimeBase__Fields_DEFINED
struct Datatype_dateTimeBase__Fields {
    struct Datatype_anySimpleType__Fields _;
    XsdDateTimeFlags__Enum dateTimeFlags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_dateTimeBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_Datatype_dateTimeBase__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Datatype_dateTimeBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_dateTimeBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_dateTimeBase__Fields_FWDDECL)
#include <Modloader/app/structs/Datatype_dateTimeBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_dateTimeBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
