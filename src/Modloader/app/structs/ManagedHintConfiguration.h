#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ManagedHintConfiguration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ManagedHintConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManagedHintConfiguration_DEFINED)
#include <Modloader/app/structs/HintPositioning__Enum.h>
#include <Modloader/app/structs/HintSize__Enum.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MessageDescriptor_DEFINED) && defined(IL2CPP_STRUCT_HintPositioning__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_HintSize__Enum_DEFINED)
#define IL2CPP_STRUCT_ManagedHintConfiguration_DEFINED
struct MessageProvider;
struct ManagedHintConfiguration {
    struct MessageProvider* Message;
    struct MessageDescriptor Descriptor;
    HintPositioning__Enum Alignment;

    struct Vector2 Offset;
    HintSize__Enum Size;

    bool UseDescriptor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ManagedHintConfiguration_FWDDECL)
#define IL2CPP_STRUCT_ManagedHintConfiguration_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_ManagedHintConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManagedHintConfiguration_DEFINED) && !defined(IL2CPP_STRUCT_ManagedHintConfiguration_FWDDECL)
#include <Modloader/app/structs/ManagedHintConfiguration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ManagedHintConfiguration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
