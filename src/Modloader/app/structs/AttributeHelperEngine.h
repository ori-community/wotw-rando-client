#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributeHelperEngine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributeHelperEngine_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeHelperEngine_DEFINED)
#define IL2CPP_STRUCT_AttributeHelperEngine_DEFINED
struct AttributeHelperEngine__Class;
struct AttributeHelperEngine {
    struct AttributeHelperEngine__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AttributeHelperEngine_FWDDECL)
#define IL2CPP_STRUCT_AttributeHelperEngine_FWDDECL
#include <Modloader/app/structs/AttributeHelperEngine__Class.h>
#endif
#undef IL2CPP_STRUCT_AttributeHelperEngine_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeHelperEngine_DEFINED) && !defined(IL2CPP_STRUCT_AttributeHelperEngine_FWDDECL)
#include <Modloader/app/structs/AttributeHelperEngine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributeHelperEngine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
