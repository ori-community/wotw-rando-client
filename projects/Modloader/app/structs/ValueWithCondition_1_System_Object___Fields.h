#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueWithCondition_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueWithCondition_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueWithCondition_1_System_Object___Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ValueWithCondition_1_System_Object___Fields_DEFINED
struct DynamicDataResolver;
struct Object;
struct ValueWithCondition_1_System_Object___Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct Object* DefaultValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValueWithCondition_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_ValueWithCondition_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ValueWithCondition_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueWithCondition_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_ValueWithCondition_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/ValueWithCondition_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueWithCondition_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
