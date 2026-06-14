#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabSimpleJson__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabSimpleJson__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSimpleJson__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PlayFabSimpleJson__StaticFields_DEFINED
struct Char__Array;
struct List_1_System_Type_;
struct StringBuilder;
struct IJsonSerializerStrategy;
struct PocoJsonSerializerStrategy;
struct PlayFabSimpleJson__StaticFields {
    struct Char__Array* EscapeTable;
    struct Char__Array* EscapeCharacters;
    struct List_1_System_Type_* NumberTypes;
    struct StringBuilder* _serializeObjectBuilder;
    struct StringBuilder* _parseStringBuilder;
    struct IJsonSerializerStrategy* _currentJsonSerializerStrategy;
    struct PocoJsonSerializerStrategy* _pocoJsonSerializerStrategy;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabSimpleJson__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabSimpleJson__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/IJsonSerializerStrategy.h>
#include <Modloader/app/structs/List_1_System_Type_.h>
#include <Modloader/app/structs/PocoJsonSerializerStrategy.h>
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_PlayFabSimpleJson__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSimpleJson__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabSimpleJson__StaticFields_FWDDECL)
#include <Modloader/app/structs/PlayFabSimpleJson__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabSimpleJson__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
