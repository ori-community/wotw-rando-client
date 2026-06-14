#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInstantiationScanner_GameObjectVisitor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInstantiationScanner_GameObjectVisitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_GameObjectVisitor__Fields_DEFINED)
#include <Modloader/app/structs/DynamicInstantiationScanner_Visitor__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicInstantiationScanner_Visitor__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicInstantiationScanner_GameObjectVisitor__Fields_DEFINED
struct DynamicInstantiationAttribute;
struct FieldInfo_1;
struct DynamicInstantiationScanner_GameObjectVisitor__Fields {
    struct DynamicInstantiationScanner_Visitor__Fields _;
    bool m_isMoonReference;
    struct DynamicInstantiationAttribute* m_attribute;
    struct FieldInfo_1* m_field;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_GameObjectVisitor__Fields_FWDDECL)
#define IL2CPP_STRUCT_DynamicInstantiationScanner_GameObjectVisitor__Fields_FWDDECL
#include <Modloader/app/structs/DynamicInstantiationAttribute.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#endif
#undef IL2CPP_STRUCT_DynamicInstantiationScanner_GameObjectVisitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_GameObjectVisitor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_GameObjectVisitor__Fields_FWDDECL)
#include <Modloader/app/structs/DynamicInstantiationScanner_GameObjectVisitor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInstantiationScanner_GameObjectVisitor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
