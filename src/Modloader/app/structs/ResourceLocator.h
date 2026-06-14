#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceLocator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceLocator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceLocator_DEFINED)
#define IL2CPP_STRUCT_ResourceLocator_DEFINED
struct Object;
struct ResourceLocator {
    struct Object* _value;
    int32_t _dataPos;
};
#endif
#if !defined(IL2CPP_STRUCT_ResourceLocator_FWDDECL)
#define IL2CPP_STRUCT_ResourceLocator_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ResourceLocator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceLocator_DEFINED) && !defined(IL2CPP_STRUCT_ResourceLocator_FWDDECL)
#include <Modloader/app/structs/ResourceLocator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceLocator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
