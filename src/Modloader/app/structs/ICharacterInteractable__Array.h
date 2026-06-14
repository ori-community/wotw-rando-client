#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICharacterInteractable__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICharacterInteractable__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICharacterInteractable__Array_DEFINED)
#define IL2CPP_STRUCT_ICharacterInteractable__Array_DEFINED
struct ICharacterInteractable__Array__Class;
struct ICharacterInteractable;
struct ICharacterInteractable__Array {
    struct ICharacterInteractable__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct ICharacterInteractable* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_ICharacterInteractable__Array_FWDDECL)
#define IL2CPP_STRUCT_ICharacterInteractable__Array_FWDDECL
#include <Modloader/app/structs/ICharacterInteractable.h>
#include <Modloader/app/structs/ICharacterInteractable__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_ICharacterInteractable__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICharacterInteractable__Array_DEFINED) && !defined(IL2CPP_STRUCT_ICharacterInteractable__Array_FWDDECL)
#include <Modloader/app/structs/ICharacterInteractable__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICharacterInteractable__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
