var CustomUniqueId = {
_INITIALIZE_KEYCHAIN: function(success, failure,param1){
    cordova.exec(success, failure, "CustomUniqueId", "_INIT_KEYCHAIN", [param1]);
}

};
module.exports = CustomUniqueId;