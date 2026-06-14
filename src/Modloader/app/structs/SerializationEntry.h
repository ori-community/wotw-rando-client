#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationEntry_DEFINED)
#define IL2CPP_STRUCT_SerializationEntry_DEFINED
struct Type;
struct Object;
struct String;
struct SerializationEntry {
    struct Type* m_type;
    struct Object* m_value;
    struct String* m_name;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializationEntry_FWDDECL)
#define IL2CPP_STRUCT_SerializationEntry_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_SerializationEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationEntry_DEFINED) && !defined(IL2CPP_STRUCT_SerializationEntry_FWDDECL)
#include <Modloader/app/structs/SerializationEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
