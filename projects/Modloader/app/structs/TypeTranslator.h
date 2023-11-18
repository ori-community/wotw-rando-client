#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeTranslator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeTranslator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeTranslator_DEFINED)
#define IL2CPP_STRUCT_TypeTranslator_DEFINED
struct TypeTranslator__Class;
struct TypeTranslator {
    struct TypeTranslator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeTranslator_FWDDECL)
#define IL2CPP_STRUCT_TypeTranslator_FWDDECL
#include <Modloader/app/structs/TypeTranslator__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeTranslator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeTranslator_DEFINED) && !defined(IL2CPP_STRUCT_TypeTranslator_FWDDECL)
#include <Modloader/app/structs/TypeTranslator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeTranslator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
