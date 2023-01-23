#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeInferenceRuleAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeInferenceRuleAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeInferenceRuleAttribute_DEFINED)
#include <Modloader/app/structs/TypeInferenceRuleAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_TypeInferenceRuleAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeInferenceRuleAttribute_DEFINED
struct TypeInferenceRuleAttribute__Class;
struct TypeInferenceRuleAttribute {
    struct TypeInferenceRuleAttribute__Class* klass;
    MonitorData* monitor;
    struct TypeInferenceRuleAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeInferenceRuleAttribute_FWDDECL)
#define IL2CPP_STRUCT_TypeInferenceRuleAttribute_FWDDECL
#include <Modloader/app/structs/TypeInferenceRuleAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeInferenceRuleAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeInferenceRuleAttribute_DEFINED) && !defined(IL2CPP_STRUCT_TypeInferenceRuleAttribute_FWDDECL)
#include <Modloader/app/structs/TypeInferenceRuleAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeInferenceRuleAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
