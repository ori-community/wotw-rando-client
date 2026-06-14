#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueInComponentProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueInComponentProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueInComponentProvider__Fields_DEFINED)
#include <Modloader/app/structs/FloatValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_FloatValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_ValueInComponentProvider__Fields_DEFINED
struct Component_1;
struct String;
struct FieldInfo_1;
struct ValueInComponentProvider__Fields {
    struct FloatValueProvider__Fields _;
    struct Component_1* Component;
    struct String* ValueVariableName;
    struct FieldInfo_1* m_valuefieldInfo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValueInComponentProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_ValueInComponentProvider__Fields_FWDDECL
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ValueInComponentProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueInComponentProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ValueInComponentProvider__Fields_FWDDECL)
#include <Modloader/app/structs/ValueInComponentProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueInComponentProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
