#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActiveCharacterCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActiveCharacterCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActiveCharacterCondition_DEFINED)
#include <Modloader/app/structs/ActiveCharacterCondition__Fields.h>
#if defined(IL2CPP_STRUCT_ActiveCharacterCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_ActiveCharacterCondition_DEFINED
struct ActiveCharacterCondition__Class;
struct ActiveCharacterCondition {
    struct ActiveCharacterCondition__Class* klass;
    MonitorData* monitor;
    struct ActiveCharacterCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActiveCharacterCondition_FWDDECL)
#define IL2CPP_STRUCT_ActiveCharacterCondition_FWDDECL
#include <Modloader/app/structs/ActiveCharacterCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_ActiveCharacterCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActiveCharacterCondition_DEFINED) && !defined(IL2CPP_STRUCT_ActiveCharacterCondition_FWDDECL)
#include <Modloader/app/structs/ActiveCharacterCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActiveCharacterCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
