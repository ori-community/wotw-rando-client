#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonPosition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPosition_DEFINED)
#include <Modloader/app/structs/JsonContainerType__Enum.h>
#if defined(IL2CPP_STRUCT_JsonContainerType__Enum_DEFINED)
#define IL2CPP_STRUCT_JsonPosition_DEFINED
struct String;
struct JsonPosition {
    JsonContainerType__Enum Type;

    int32_t Position;
    struct String* PropertyName;
    bool HasIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonPosition_FWDDECL)
#define IL2CPP_STRUCT_JsonPosition_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JsonPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonPosition_DEFINED) && !defined(IL2CPP_STRUCT_JsonPosition_FWDDECL)
#include <Modloader/app/structs/JsonPosition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonPosition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
