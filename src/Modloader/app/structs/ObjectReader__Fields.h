#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectReader__Fields_DEFINED)
#include <Modloader/app/structs/StreamingContext.h>
#if defined(IL2CPP_STRUCT_StreamingContext_DEFINED)
#define IL2CPP_STRUCT_ObjectReader__Fields_DEFINED
struct Stream;
struct ISurrogateSelector;
struct ObjectManager;
struct InternalFE;
struct SerializationBinder;
struct Object;
struct Header__Array;
struct HeaderHandler;
struct SerObjectInfoInit;
struct IFormatterConverter;
struct SerStack;
struct Object__Array;
struct IntSizedArray;
struct NameCache;
struct String;
struct Type;
struct __declspec(align(8)) ObjectReader__Fields {
    struct Stream* m_stream;
    struct ISurrogateSelector* m_surrogates;
    struct StreamingContext m_context;
    struct ObjectManager* m_objectManager;
    struct InternalFE* formatterEnums;
    struct SerializationBinder* m_binder;
    int64_t topId;
    bool bSimpleAssembly;
    struct Object* handlerObject;
    struct Object* m_topObject;
    struct Header__Array* headers;
    struct HeaderHandler* handler;
    struct SerObjectInfoInit* serObjectInfoInit;
    struct IFormatterConverter* m_formatterConverter;
    struct SerStack* stack;
    struct SerStack* valueFixupStack;
    struct Object__Array* crossAppDomainArray;
    bool bFullDeserialization;
    bool bOldFormatDetected;
    struct IntSizedArray* valTypeObjectIdTable;
    struct NameCache* typeCache;
    struct String* previousAssemblyString;
    struct String* previousName;
    struct Type* previousType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectReader__Fields_FWDDECL
#include <Modloader/app/structs/HeaderHandler.h>
#include <Modloader/app/structs/Header__Array.h>
#include <Modloader/app/structs/IFormatterConverter.h>
#include <Modloader/app/structs/ISurrogateSelector.h>
#include <Modloader/app/structs/IntSizedArray.h>
#include <Modloader/app/structs/InternalFE.h>
#include <Modloader/app/structs/NameCache.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectManager.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SerObjectInfoInit.h>
#include <Modloader/app/structs/SerStack.h>
#include <Modloader/app/structs/SerializationBinder.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ObjectReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectReader__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
